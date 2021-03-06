/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBProfileIntroCardExternalLink : FBGraphQLInput {

	NSString* _canonicalName;
	NSNumber* _service;

}

@property (nonatomic,copy) NSString * canonicalName;              //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSNumber * service;                    //@synthesize service=_service - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)canonicalName;
-(void)setCanonicalName:(NSString *)arg1 ;
-(void)setService:(NSNumber *)arg1 ;
-(NSNumber *)service;
@end

