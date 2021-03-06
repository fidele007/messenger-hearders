/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBWebBridge : NSObject {

	NSArray* _attachedBridgeMethodSets;
	NSArray* _availableBridgeMethodSets;
	id _performer;

}

@property (nonatomic,copy) NSArray * attachedBridgeMethodSets;               //@synthesize attachedBridgeMethodSets=_attachedBridgeMethodSets - In the implementation block
@property (nonatomic,copy) NSArray * availableBridgeMethodSets;              //@synthesize availableBridgeMethodSets=_availableBridgeMethodSets - In the implementation block
@property (assign,nonatomic,__weak) id performer;                            //@synthesize performer=_performer - In the implementation block
+(BOOL)isBridgeRequestURL:(id)arg1 ;
-(void)setAvailableBridgeMethodSets:(NSArray *)arg1 ;
-(void)setPerformer:(id)arg1 ;
-(NSArray *)attachedBridgeMethodSets;
-(BOOL)_selectorNameIsAllowed:(id)arg1 ;
-(id)_invocationForSelector:(SEL)arg1 arguments:(id)arg2 ;
-(void)_executeBridgeRequest:(id)arg1 ;
-(NSArray *)availableBridgeMethodSets;
-(void)setAttachedBridgeMethodSets:(NSArray *)arg1 ;
-(id)initWithMethodSets:(id)arg1 performer:(id)arg2 ;
-(void)executeBridgeRequestURL:(id)arg1 ;
-(void)attachToWebView:(id)arg1 ;
-(id)performer;
@end

