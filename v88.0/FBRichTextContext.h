/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSData, NSAttributedString, UIFont;

@interface FBRichTextContext : NSObject <NSCopying> {

	NSArray* _lines;
	NSData* _originData;
	char _writingDirection;
	NSAttributedString* _attributedString;
	CGColorRef _defaultColor;
	long long _defaultHorizontalAlignmentMode;
	UIFont* _defaultFont;
	unsigned long long _maximumNumberOfLines;
	NSAttributedString* _truncationAttributedString;
	unsigned long long _truncationMode;
	CTFrameRef _frame;
	CTFramesetterRef _framesetter;
	CTLineRef _extraLine;
	CTLineRef _truncatedLine;
	CTLineRef _truncationToken;
	long long _truncationTokenLength;
	long long _truncationTokenIndexOffset;
	double _truncationTokenWidth;
	CGSize _constrainedSize;
	CGSize _size;
	FBAnnotationPosition _visibleRange;
	CGPoint _extraLineOrigin;
	CGPoint _truncatedLineOrigin;
	CGRect _truncationTokenFrame;

}

@property (nonatomic,retain) CTFrameRef frame;                                                    //@synthesize frame=_frame - In the implementation block
@property (nonatomic,retain) CTFramesetterRef framesetter;                                        //@synthesize framesetter=_framesetter - In the implementation block
@property (assign,nonatomic) CGSize size;                                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) FBAnnotationPosition visibleRange;                                   //@synthesize visibleRange=_visibleRange - In the implementation block
@property (assign,nonatomic) char writingDirection;                                               //@synthesize writingDirection=_writingDirection - In the implementation block
@property (nonatomic,retain) CTLineRef extraLine;                                                 //@synthesize extraLine=_extraLine - In the implementation block
@property (assign,nonatomic) CGPoint extraLineOrigin;                                             //@synthesize extraLineOrigin=_extraLineOrigin - In the implementation block
@property (nonatomic,retain) CTLineRef truncatedLine;                                             //@synthesize truncatedLine=_truncatedLine - In the implementation block
@property (nonatomic,retain) CTLineRef truncationToken;                                           //@synthesize truncationToken=_truncationToken - In the implementation block
@property (assign,nonatomic) CGPoint truncatedLineOrigin;                                         //@synthesize truncatedLineOrigin=_truncatedLineOrigin - In the implementation block
@property (assign,nonatomic) long long truncationTokenLength;                                     //@synthesize truncationTokenLength=_truncationTokenLength - In the implementation block
@property (assign,nonatomic) long long truncationTokenIndexOffset;                                //@synthesize truncationTokenIndexOffset=_truncationTokenIndexOffset - In the implementation block
@property (assign,nonatomic) double truncationTokenWidth;                                         //@synthesize truncationTokenWidth=_truncationTokenWidth - In the implementation block
@property (assign,nonatomic) CGRect truncationTokenFrame;                                         //@synthesize truncationTokenFrame=_truncationTokenFrame - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * attributedString;                        //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) CGColorRef defaultColor;                                           //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,readonly) long long defaultHorizontalAlignmentMode;                          //@synthesize defaultHorizontalAlignmentMode=_defaultHorizontalAlignmentMode - In the implementation block
@property (nonatomic,copy,readonly) UIFont * defaultFont;                                         //@synthesize defaultFont=_defaultFont - In the implementation block
@property (nonatomic,readonly) CGSize constrainedSize;                                            //@synthesize constrainedSize=_constrainedSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfLines;                           //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * truncationAttributedString;              //@synthesize truncationAttributedString=_truncationAttributedString - In the implementation block
@property (nonatomic,readonly) unsigned long long truncationMode;                                 //@synthesize truncationMode=_truncationMode - In the implementation block
+(id)_richTextContextWithAttributedString:(id)arg1 constrainedToSize:(CGSize)arg2 defaultFont:(id)arg3 defaultColor:(CGColorRef)arg4 defaultHorizontalAlignmentMode:(long long)arg5 maximumNumberOfLines:(unsigned long long)arg6 truncationMode:(unsigned long long)arg7 truncationAttributedString:(id)arg8 creationBlock:(/*^block*/id)arg9 ;
+(BOOL)_shouldCreateContext;
+(BOOL)_shouldStoreContextInCacheWithComputedHeight;
+(id)richTextContextWithAttributedString:(id)arg1 constrainedToSize:(CGSize)arg2 defaultFont:(id)arg3 defaultColor:(CGColorRef)arg4 defaultHorizontalAlignmentMode:(long long)arg5 maximumNumberOfLines:(unsigned long long)arg6 truncationMode:(unsigned long long)arg7 truncationAttributedString:(id)arg8 ;
-(id)textCheckingResultAtPoint:(CGPoint)arg1 ;
-(CGSize)constrainedSize;
-(void)enumerateTextIndexesAtPosition:(CGPoint)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSAttributedString *)truncationAttributedString;
-(id)_initWithAttributedString:(id)arg1 constrainedToSize:(CGSize)arg2 defaultFont:(id)arg3 defaultColor:(CGColorRef)arg4 maximumNumberOfLines:(unsigned long long)arg5 truncationMode:(unsigned long long)arg6 truncationAttributedString:(id)arg7 ;
-(void)buildState;
-(void)setFramesetter:(CTFramesetterRef)arg1 ;
-(CTLineRef)truncatedLine;
-(void)_enumerateLinesAndOriginsUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextForTextRange:(FBAnnotationPosition)arg1 measureOption:(unsigned long long)arg2 usingTextFragmentBlock:(/*^block*/id)arg3 textFragmentRunBlock:(/*^block*/id)arg4 ;
-(long long)truncationTokenIndexOffset;
-(CGRect)truncationTokenFrame;
-(double)truncationTokenWidth;
-(CTLineRef)truncationToken;
-(long long)defaultHorizontalAlignmentMode;
-(CGPoint)extraLineOrigin;
-(void)setExtraLine:(CTLineRef)arg1 ;
-(void)setExtraLineOrigin:(CGPoint)arg1 ;
-(void)setTruncatedLine:(CTLineRef)arg1 ;
-(void)setTruncatedLineOrigin:(CGPoint)arg1 ;
-(void)setTruncationToken:(CTLineRef)arg1 ;
-(void)setTruncationTokenLength:(long long)arg1 ;
-(void)setTruncationTokenIndexOffset:(long long)arg1 ;
-(void)setTruncationTokenWidth:(double)arg1 ;
-(void)setTruncationTokenFrame:(CGRect)arg1 ;
-(void)setframesetter:(CTFramesetterRef)arg1 ;
-(void)_invalidateFrame;
-(void)enumerateTextFragmentsForTextRange:(FBAnnotationPosition)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateTextFragmentsForTextRange:(FBAnnotationPosition)arg1 measureOption:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateTextRunsForTextRange:(FBAnnotationPosition)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CTFramesetterRef)framesetter;
-(CTLineRef)extraLine;
-(CGPoint)truncatedLineOrigin;
-(long long)truncationTokenLength;
-(id)lineOriginData:(id*)arg1 ;
-(long long)textIndexAtPoint:(CGPoint)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CTFrameRef)arg1 ;
-(CTFrameRef)frame;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)setSize:(CGSize)arg1 ;
-(UIFont *)defaultFont;
-(NSAttributedString *)attributedString;
-(unsigned long long)numberOfLines;
-(char)writingDirection;
-(void)drawInContext:(CGContextRef)arg1 ;
-(unsigned long long)maximumNumberOfLines;
-(BOOL)isTruncated;
-(void)setWritingDirection:(char)arg1 ;
-(unsigned long long)truncationMode;
-(CGColorRef)defaultColor;
-(void)setVisibleRange:(FBAnnotationPosition)arg1 ;
-(FBAnnotationPosition)visibleRange;
@end

