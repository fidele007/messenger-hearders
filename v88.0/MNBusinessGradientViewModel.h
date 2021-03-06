/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNBusinessGradientViewModel : FBValueObject <NSCopying> {

	NSArray* _colors;
	NSArray* _locations;
	double _aspectRatio;
	CGSize _maxSize;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,copy,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                        //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint;                    //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                      //@synthesize endPoint=_endPoint - In the implementation block
-(id)initWithColors:(id)arg1 locations:(id)arg2 maxSize:(CGSize)arg3 aspectRatio:(double)arg4 startPoint:(CGPoint)arg5 endPoint:(CGPoint)arg6 ;
-(CGSize)maxSize;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(double)aspectRatio;
@end

