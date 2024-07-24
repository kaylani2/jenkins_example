pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                script {
                    // Ensure necessary directories are created
                    sh 'mkdir -p build'
                }
                dir('build') {
                    // Compile the main application
                    sh 'g++ -o main ../src/main.cpp ../src/functions.cpp'
                    // Compile the test source files
                    sh 'g++ -o runTests ../tests/test_main.cpp ../src/functions.cpp -lgtest -lgtest_main -pthread'
                }
            }
        }
        stage('Test') {
            steps {
                dir('build') {
                    // Run the tests
                    sh './runTests'
                }
            }
        }
    }
}

