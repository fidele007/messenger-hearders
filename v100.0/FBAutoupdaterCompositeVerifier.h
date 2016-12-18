/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterVerifier.h>

@class NSArray, NSString;

@interface FBAutoupdaterCompositeVerifier : NSObject <FBAutoupdaterVerifier> {

	NSArray* _verifiers;

}

@property (nonatomic,copy) NSArray * verifiers;                     //@synthesize verifiers=_verifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVerifiers:(id)arg1 ;
-(BOOL)verifyUpdate:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)verifiers;
-(void)setVerifiers:(NSArray *)arg1 ;
@end

