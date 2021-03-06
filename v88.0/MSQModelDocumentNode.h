/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQEventDispatcher.h>
#import <Messenger/MSQModelUndoable.h>

@class NSMutableSet, MSQModelDocumentContext, NSString;

@interface MSQModelDocumentNode : MQEventDispatcher <MSQModelUndoable> {

	long long _undoableState;
	NSMutableSet* _undoableNodes;
	MSQModelDocumentContext* _context;

}

@property (nonatomic,readonly) MSQModelDocumentContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long undoableState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addUndoableNodes:(id)arg1 ;
-(void)addUndoableNode:(id)arg1 ;
-(void)enumerateUndoableNodesUsingBlock:(/*^block*/id)arg1 ;
-(long long)undoableState;
-(void)setUndoableState:(long long)arg1 ;
-(id)init;
-(MSQModelDocumentContext *)context;
-(id)initWithContext:(id)arg1 ;
@end

