//
//  Videos.h
//  AppInventor2
//
//  Created by Vikas Kumar on 10/11/14.
//  Copyright (c) 2014 Vikas Kumar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Videos : NSManagedObject

@property (nonatomic, retain) NSString * videoTitle;
@property (nonatomic, retain) NSNumber * videoCategory;
@property (nonatomic, retain) NSString * videoPath;

@end
