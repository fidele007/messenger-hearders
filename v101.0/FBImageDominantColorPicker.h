/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSSet;

@interface FBImageDominantColorPicker : NSObject {

	char* _rawData;
	unsigned long long _pixelCount;
	NSSet* _paletteColors;
	mutex _paletteColorsLock;

}
-(id)initWithImage:(id)arg1 maxPixelSize:(double)arg2 ;
-(id)dominantColorWithOptions:(long long)arg1 ;
-(id)_dominantColorsWithOptions:(long long)arg1 ;
-(id)_getOrComputePaletteColors;
-(id)dominantColorPaletteWithOptions:(long long)arg1 ;
-(void)dealloc;
@end

