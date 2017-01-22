/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBStarRatingsUserData;

@interface FBStarRatingsCompletionNetworkerRequest : FBNetworkerRequest {

	FBStarRatingsUserData* _userData;

}

@property (nonatomic,readonly) FBStarRatingsUserData * userData;              //@synthesize userData=_userData - In the implementation block
-(id)networkRequest;
-(id)_stringForCompletionState:(unsigned long long)arg1 ;
-(id)initiationModeAsString;
-(id)initWithCallbackPerformer:(id)arg1 userData:(id)arg2 ;
-(id)dictionaryRepresentation;
-(FBStarRatingsUserData *)userData;
@end
