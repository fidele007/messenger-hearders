/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASTextKitTruncating.h>

@class ASTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface ASTextKitTailTruncater : NSObject <ASTextKitTruncating> {

	ASTextKitContext* _context;
	NSAttributedString* _truncationAttributedString;
	NSCharacterSet* _avoidTailTruncationSet;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _visibleRanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) vector<_NSRange visibleRanges;              //@synthesize visibleRanges=_visibleRanges - In the implementation block
@property (nonatomic,readonly) NSRange firstVisibleRange; 
-(NSRange)firstVisibleRange;
-(id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 ;
-(vector<_NSRange)visibleRanges;
-(unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3 ;
-(unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3 ;
-(void)truncate;
@end

