using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static RevisionTopics.Program.FuncDelegate;
using System.Configuration;
namespace RevisionTopics
{
    internal class Program
    {    public class logger
        {
            public delegate void Log(string message);
            private   Log logAction;

            public logger(Log action)
            {
                this.logAction = action;
            }

            public void log(string message)
            {
                this.logAction(message);
            }
        }

        public class MulticastDelegate
        {  
            public MulticastDelegate()
           
            {
            }
            public delegate void Log(string message);
            private Log logAction;

            public void AddMethod(Log action)
            {
                this.logAction += action;
            }
            public void log(string message)
            {
                this.logAction(message);
            }
        }

        public class FuncDelegate
        {
        public  delegate int SquareDelegate(int x);
            
    
        }
        static int Mehtod(int x)
        {
            return x * x;
        }




        public static void LogToScreen(string message)
        {
            Console.WriteLine(message );
        }

        public static void LogToScreen2(string message)
        {
            Console.WriteLine(message);
        }


        static Func<int, int> square = Mehtod;

        static void ParamameterLessMethod()
        {
            Console.WriteLine("ParameterLessAction");
        }
        static void MethodWith_int_Parameter(int num)
        {
            Console.WriteLine($"ParamameterLessMethod {num}");
        }
        static void MethodWithMultipleParameters(string z, int x)
        {
            Console.WriteLine($"{z} {x}");
        }

        static Predicate<int> isEvenPredicate = isEven;
        static bool isEven(int x)
        {
            return x % 2 == 0;
        }


        static void Main(string[] args)
        { //---------------       Simple Delegate       -------------------
          //    logger logscreen = new logger(LogToScreen);
          //    logscreen.log("fklsjfk");

            // -----------call any method by one delegate usning Multicast DELEGATE ------------

            //MulticastDelegate multicastDelegate = new MulticastDelegate();
            //multicastDelegate.AddMethod(LogToScreen);
            //multicastDelegate.AddMethod(LogToScreen2);
            //multicastDelegate.log("aaa");
            // ------------------------  Func Delegate  ---> return value           ----------------
            //FuncDelegate func=new FuncDelegate();
            // SquareDelegate square = new SquareDelegate(Mehtod);
            //  int result = square(5);
            //  Console.WriteLine(result);
            //

            //----------------------   simple func   ------------------
            //int result = square(4);
            //Console.WriteLine(result);

            //------------------------ Actio Delegate (void) ------------------
            //-----------------------------------------------------------


            //Action ParameterLessAction = ParamameterLessMethod;
            //Action<int> ActionWith_int_Parameter = MethodWith_int_Parameter;
            //Action<string, int> ActionWithMultipleParameters =  MethodWithMultipleParameters;
            //// void
            //ParameterLessAction();
            //ActionWith_int_Parameter(42);
            //ActionWithMultipleParameters("Hi", 100);
            //Console.ReadLine();

            //// ----------------------- Predicate Delegate ------------

            //bool result = isEvenPredicate(5);
            //Console.WriteLine(result);

            //Console.ReadLine();



            //-------------------- lambda Expression = Anonymous Functions -------------


            string ConnectionString = ConfigurationManager.AppSettings["ConnectionString"];
            string logLevel = ConfigurationManager.AppSettings["LogLevel"];
            string koko = ConfigurationManager.AppSettings["koko"];
            string MyDbConnection =  ConfigurationManager.ConnectionStrings["MyDbConnection"].ConnectionString;
  
            
            Console.WriteLine($"\nConnectionString:{ConnectionString}");
            Console.WriteLine($"\nlogLevel: {logLevel}");
            Console.WriteLine($"\nkoko: {koko}");
            Console.WriteLine($"\nMyDbConnection: {MyDbConnection}");
            Console.ReadKey();











        }





    }









      
  
}
