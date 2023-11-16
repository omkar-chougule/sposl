#include <jni.h>

#include <iostream>

#include "B1.h"



using namespace std;



JNIEXPORT jint JNICALL Java_B1_add(JNIEnv *env, jobject obj, jint a, jint b) {

    jint result = a + b;

    cout << a << " + " << b << " = " << result << endl;

    return result;

}





/*

javac -h . B1.java

javac B1.java

javah B1

gcc -fpIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libB1.so B1.c

java -Djava.library.path=. B1

*/



OpenJDK-amd64'
