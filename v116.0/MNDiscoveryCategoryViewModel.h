/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxImpressionLoggingData, NSString;

@interface MNDiscoveryCategoryViewModel : FBValueObject <NSCopying> {

	MNInboxImpressionLoggingData* _loggingData;
	NSString* _categoryID;
	NSString* _name;

}

@property (nonatomic,copy,readonly) MNInboxImpressionLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryID;                                   //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
-(id)initWithLoggingData:(id)arg1 categoryID:(id)arg2 name:(id)arg3 ;
-(MNInboxImpressionLoggingData *)loggingData;
-(NSString *)name;
-(NSString *)categoryID;
@end

