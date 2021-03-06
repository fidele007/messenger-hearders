/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFacebookAPIRequest.h>

@class NSString, NSDictionary;

@interface FBGraphBatchParticipatingRequest : FBFacebookAPIRequest {

	BOOL _needsResultInBatch;
	NSString* _name;
	NSString* _continueIfTruthy;
	FBGraphBatchParticipatingRequest* _parentRequest;

}

@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * batchParameters; 
@property (assign,nonatomic) BOOL needsResultInBatch;                                         //@synthesize needsResultInBatch=_needsResultInBatch - In the implementation block
@property (nonatomic,readonly) FBGraphBatchParticipatingRequest * parentRequest;              //@synthesize parentRequest=_parentRequest - In the implementation block
@property (nonatomic,copy) NSString * continueIfTruthy;                                       //@synthesize continueIfTruthy=_continueIfTruthy - In the implementation block
-(void)setParentRequest:(id)arg1 needsParentResult:(BOOL)arg2 ;
-(NSDictionary *)batchParameters;
-(void)setNeedsResultInBatch:(BOOL)arg1 ;
-(void)setContinueIfTruthy:(NSString *)arg1 ;
-(NSString *)continueIfTruthy;
-(BOOL)needsResultInBatch;
-(FBGraphBatchParticipatingRequest *)parentRequest;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

