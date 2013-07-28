//
//  NSManagedObject+ safeSetValuesForKeysWithDictionary.h
//  Youboox
//
//  Created by Vincent Daubry on 13/07/13.
//
//

#import <Foundation/Foundation.h>

@interface NSManagedObject (safeSetValuesForKeysWithDictionary)

- (void)safeSetManagedValuesForKeysWithDictionary:(NSDictionary *)keyedValues dateFormatter:(NSDateFormatter *)dateFormatter;

@end
