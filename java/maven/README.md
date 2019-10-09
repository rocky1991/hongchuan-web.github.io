mvn --version

sudo mvn archetype:generate -DgroupId=com.mycompany.app -DartifactId=my-app -DarchetypeArtifactId=maven-archetype-quickstart -DarchetypeVersion=1.4 -DinteractiveMode=false

cd my-app

sudo mvn package

phases are:
	    validate
		generate-sources
		process-sources
		generate-resources
		process-resources
		compile