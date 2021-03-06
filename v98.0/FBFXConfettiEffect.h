/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFXGeometryEffect.h>

@interface FBFXConfettiEffect : FBFXGeometryEffect {

	int _rows;
	int _columns;
	CGSize _correctedFragmentSize;
	FBFXConfettiEffectFragment* _fragments;

}
-(void)update:(FBFXConfettiEffectUpdate*)arg1 forFragment:(const FBFXConfettiEffectFragment*)arg2 atColumn:(int)arg3 row:(int)arg4 ;
-(void)eachFragment:(/*^block*/id)arg1 ;
-(void)subdivide:(CGSize)arg1 columns:(int*)arg2 rows:(int*)arg3 ;
-(void)animate:(float)arg1 finished:(BOOL*)arg2 ;
-(BOOL)supportsEdgeAntialiasing;
-(unsigned)buildGeometryWithRect:(CGRect)arg1 texCoordExtent:(TexCoordExtent)arg2 requestVertexBuffer:(/*^block*/id)arg3 requestIndexBuffer:(/*^block*/id)arg4 ;
-(void)configureFragment:(FBFXConfettiEffectFragment*)arg1 atColumn:(int)arg2 row:(int)arg3 ;
-(void)dealloc;
@end

