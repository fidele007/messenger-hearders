/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSDictionary;

@interface FBUploadLocalContactsBatchRequest : FBNetworkerRequest {

	NSDictionary* _params;

}

@property (nonatomic,copy) NSDictionary * params;              //@synthesize params=_params - In the implementation block
-(id)networkRequest;
-(void)setParams:(NSDictionary *)arg1 ;
-(NSDictionary *)params;
@end
