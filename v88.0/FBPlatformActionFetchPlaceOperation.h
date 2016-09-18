/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperation.h>

@class NSString;

@interface FBPlatformActionFetchPlaceOperation : FBPlatformActionOperation {

	NSString* _placeFBID;
	NSString* _placeName;

}

@property (nonatomic,copy,readonly) NSString * placeFBID;              //@synthesize placeFBID=_placeFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
+(unsigned long long)cachedResponseThreshold;
-(id)initWithAction:(id)arg1 placeFBID:(id)arg2 ;
-(NSString *)placeFBID;
-(id)defaultErrorMessage;
-(NSString *)placeName;
-(void)process;
@end
