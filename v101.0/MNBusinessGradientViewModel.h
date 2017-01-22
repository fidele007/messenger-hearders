/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,copy,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                    //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint;                    //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                      //@synthesize endPoint=_endPoint - In the implementation block
-(id)initWithColors:(id)arg1 locations:(id)arg2 aspectRatio:(double)arg3 startPoint:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(double)aspectRatio;
@end
