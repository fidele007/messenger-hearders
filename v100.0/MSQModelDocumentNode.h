/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEventDispatcher.h>
#import <Messenger/MSQModelDocumentNodeProtocol.h>

@class MSQModelDocumentContext, NSMutableSet, NSString;

@interface MSQModelDocumentNode : MQEventDispatcher <MSQModelDocumentNodeProtocol> {

	long long _undoableState;
	NSMutableSet* _undoableNodes;
	MSQModelDocumentContext* _context;

}

@property (assign,nonatomic) long long undoableState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MSQModelDocumentContext * context;              //@synthesize context=_context - In the implementation block
-(void)addUndoableNodes:(id)arg1 ;
-(void)addUndoableNode:(id)arg1 ;
-(void)enumerateUndoableNodesUsingBlock:(/*^block*/id)arg1 ;
-(long long)undoableState;
-(void)setUndoableState:(long long)arg1 ;
-(id)init;
-(MSQModelDocumentContext *)context;
-(id)initWithContext:(id)arg1 ;
@end
