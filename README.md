JSON-to-CoreData
================

Some categories to map JSON to CoreData model

Credit goes to original author, Tom Harrington :
http://www.cimgf.com/2011/06/02/saving-json-to-core-data/

# EXAMPLE
NSDictionary *mapping = @{
						  @"name": @"countdownName",
						  @"date": @"countdownDate"
						  };
						  
NSDictionary *values = @{
						 @"countdownName": @"Hello",
						 @"countdownDate": @"10/29/2008 08:29PM"
						 };
						 
Countdown *newObject = [NSEntityDescription insertNewObjectForEntityForName:@"Countdown" inManagedObjectContext:self.managedObjectContext];

[newObject safeSetManagedValuesForKeysWithDictionary:values dateFormatter:dateFormat mapping:mapping];

## TODO

This  category does not deal with relationships

Here are some hints on how to do it :
http://stackoverflow.com/questions/2362323/json-and-core-data-on-the-iphone/2363996#2363996
 


## License 

This template is available under the MIT license. See the license file for more details.