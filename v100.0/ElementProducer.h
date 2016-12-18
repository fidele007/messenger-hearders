/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class UIImage, NSMutableArray;

@interface ElementProducer : NSObject {

	UIImage* _leafImage;
	NSMutableArray* _flowerImageQueue;

}
-(id)leafAtPosition:(CGPoint)arg1 scale:(double)arg2 rotation:(double)arg3 rotationStartOffset:(double)arg4 animationOrder:(int)arg5 ;
-(id)flowerAtPosition:(CGPoint)arg1 scale:(double)arg2 rotationStartOffset:(double)arg3 animationOrder:(int)arg4 ;
-(id)init;
@end

