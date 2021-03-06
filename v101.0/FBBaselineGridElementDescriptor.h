/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBElementDescriptor.h>
#import <Messenger/FBSnapGuideElement.h>

@class NSString;

@interface FBBaselineGridElementDescriptor : FBElementDescriptor <FBSnapGuideElement> {

	double _anchor;
	double _lineHeight;

}

@property (assign,nonatomic) double anchor;                         //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) double lineHeight;                     //@synthesize lineHeight=_lineHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementDescriptorForDescription:(id)arg1 ;
-(double)closestGuideRailToPosition:(double)arg1 snapBehavior:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lineHeight;
-(void)setLineHeight:(double)arg1 ;
-(double)anchor;
-(void)setAnchor:(double)arg1 ;
-(BOOL)isRendered;
@end

