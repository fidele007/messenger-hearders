/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMapSnapshotOverlayProvider.h>

@class NSArray, UIImage, NSString;

@interface FBMapSnapshotAnnotationPointsOverlay : NSObject <FBMapSnapshotOverlayProvider> {

	NSArray* _points;
	UIImage* _image;
	NSString* _imageIdentifier;
	CGPoint _centerOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnnotationPoints:(id)arg1 image:(id)arg2 imageIdentifier:(id)arg3 centerOffset:(CGPoint)arg4 ;
-(id)addOverlayForSnapshot:(id)arg1 toContext:(CGContextRef)arg2 ;
-(id)diskCacheKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

