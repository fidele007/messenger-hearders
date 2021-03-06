/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTextKitTruncating;
#import <Messenger/Messenger-Structs.h>
@class CKTextKitContext, CKTextKitShadower;

@interface CKTextKitRenderer : NSObject {

	CGSize _calculatedSize;
	CKTextKitContext* _context;
	id<CKTextKitTruncating> _truncater;
	CKTextKitShadower* _shadower;
	CGSize _constrainedSize;
	CKTextKitAttributes* _attributes;

}

@property (nonatomic,readonly) CKTextKitContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<CKTextKitTruncating> truncater;              //@synthesize truncater=_truncater - In the implementation block
@property (nonatomic,readonly) CKTextKitShadower * shadower;                   //@synthesize shadower=_shadower - In the implementation block
@property (nonatomic,readonly) CKTextKitAttributes* attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) CGSize constrainedSize;                         //@synthesize constrainedSize=_constrainedSize - In the implementation block
-(id)textCheckingResultAtPoint:(CGPoint)arg1 ;
-(id)initWithTextKitAttributes:(const CKTextKitAttributes*)arg1 constrainedSize:(CGSize)arg2 ;
-(CGRect)frameForTextRange:(NSRange)arg1 ;
-(CGSize)constrainedSize;
-(CKTextKitShadower *)shadower;
-(void)drawInContext:(CGContextRef)arg1 bounds:(CGRect)arg2 ;
-(void)enumerateTextIndexesAtPosition:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)rectsForTextRange:(NSRange)arg1 measureOption:(unsigned long long)arg2 ;
-(CGRect)trailingRect;
-(CGRect)_internalRectForGlyphAtIndex:(unsigned long long)arg1 measureOption:(unsigned long long)arg2 layoutManager:(id)arg3 textContainer:(id)arg4 textStorage:(id)arg5 ;
-(unsigned long long)nearestTextIndexAtPosition:(CGPoint)arg1 ;
-(void)_calculateSize;
-(id<CKTextKitTruncating>)truncater;
-(vector<_NSRange, std::__1::allocator<_NSRange> >*)visibleRanges;
-(CGSize)size;
-(CKTextKitContext *)context;
-(CKTextKitAttributes*)attributes;
-(unsigned long long)lineCount;
@end

