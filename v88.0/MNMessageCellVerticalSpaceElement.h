/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/MNMessageCellLayoutElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMessageCellVerticalSpaceElement : FBValueObject <MNMessageCellLayoutElement, NSCopying> {

	double _height;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double height;                       //@synthesize height=_height - In the implementation block
+(id)newWithHeight:(double)arg1 ;
-(double)height;
-(id)initWithHeight:(double)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
@end
