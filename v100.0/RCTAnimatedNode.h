/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber, NSDictionary;

@interface RCTAnimatedNode : NSObject {

	NSMutableDictionary* _childNodes;
	NSMutableDictionary* _parentNodes;
	BOOL _needsUpdate;
	NSNumber* _nodeTag;
	NSDictionary* _config;

}

@property (nonatomic,readonly) NSNumber * nodeTag;                           //@synthesize nodeTag=_nodeTag - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * config;                   //@synthesize config=_config - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * childNodes; 
@property (nonatomic,copy,readonly) NSDictionary * parentNodes; 
@property (nonatomic,readonly) BOOL needsUpdate;                             //@synthesize needsUpdate=_needsUpdate - In the implementation block
-(NSDictionary *)parentNodes;
-(void)onDetachedFromNode:(id)arg1 ;
-(void)onAttachedToNode:(id)arg1 ;
-(id)initWithTag:(id)arg1 config:(id)arg2 ;
-(NSNumber *)nodeTag;
-(void)detachNode;
-(void)updateNodeIfNecessary;
-(id)init;
-(NSDictionary *)config;
-(NSDictionary *)childNodes;
-(void)removeChild:(id)arg1 ;
-(void)setNeedsUpdate;
-(void)performUpdate;
-(BOOL)needsUpdate;
-(void)addChild:(id)arg1 ;
@end

