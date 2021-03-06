/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBMessengerThreadData : FBGraphQLInput {

	NSNumber* _otherUserId;
	NSNumber* _threadFbid;

}

@property (nonatomic,copy) NSNumber * otherUserId;              //@synthesize otherUserId=_otherUserId - In the implementation block
@property (nonatomic,copy) NSNumber * threadFbid;               //@synthesize threadFbid=_threadFbid - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)threadFbid;
-(void)setThreadFbid:(NSNumber *)arg1 ;
-(NSNumber *)otherUserId;
-(void)setOtherUserId:(NSNumber *)arg1 ;
@end

