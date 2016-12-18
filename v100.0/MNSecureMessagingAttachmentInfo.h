/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString, MNSecureMessagingImageMetadata, MNSecureMessagingVideoMetadata;

@interface MNSecureMessagingAttachmentInfo : NSObject <TBase, NSCoding> {

	NSData* __secret_key;
	long long __download_fbid;
	long long __download_size_bytes;
	NSData* __download_hash;
	NSString* __suggested_file_name;
	NSString* __file_mime_type;
	NSData* __thumbnail_data;
	MNSecureMessagingImageMetadata* __image_metadata;
	MNSecureMessagingVideoMetadata* __video_metadata;
	NSString* __download_mac;
	BOOL __secret_key_isset;
	BOOL __download_fbid_isset;
	BOOL __download_size_bytes_isset;
	BOOL __download_hash_isset;
	BOOL __suggested_file_name_isset;
	BOOL __file_mime_type_isset;
	BOOL __thumbnail_data_isset;
	BOOL __image_metadata_isset;
	BOOL __video_metadata_isset;
	BOOL __download_mac_isset;

}

@property (setter=setSecret_key:,getter=secret_key,nonatomic,retain) NSData * secret_key; 
@property (assign,setter=setDownload_fbid:,getter=download_fbid,nonatomic) long long download_fbid; 
@property (assign,setter=setDownload_size_bytes:,getter=download_size_bytes,nonatomic) long long download_size_bytes; 
@property (setter=setDownload_hash:,getter=download_hash,nonatomic,retain) NSData * download_hash; 
@property (setter=setSuggested_file_name:,getter=suggested_file_name,nonatomic,retain) NSString * suggested_file_name; 
@property (setter=setFile_mime_type:,getter=file_mime_type,nonatomic,retain) NSString * file_mime_type; 
@property (setter=setThumbnail_data:,getter=thumbnail_data,nonatomic,retain) NSData * thumbnail_data; 
@property (setter=setImage_metadata:,getter=image_metadata,nonatomic,retain) MNSecureMessagingImageMetadata * image_metadata; 
@property (setter=setVideo_metadata:,getter=video_metadata,nonatomic,retain) MNSecureMessagingVideoMetadata * video_metadata; 
@property (setter=setDownload_mac:,getter=download_mac,nonatomic,retain) NSString * download_mac; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSecret_key:(NSData *)arg1 ;
-(void)setDownload_fbid:(long long)arg1 ;
-(void)setDownload_size_bytes:(long long)arg1 ;
-(void)setDownload_hash:(NSData *)arg1 ;
-(void)setSuggested_file_name:(NSString *)arg1 ;
-(void)setFile_mime_type:(NSString *)arg1 ;
-(void)setThumbnail_data:(NSData *)arg1 ;
-(void)setImage_metadata:(MNSecureMessagingImageMetadata *)arg1 ;
-(void)setVideo_metadata:(MNSecureMessagingVideoMetadata *)arg1 ;
-(void)setDownload_mac:(NSString *)arg1 ;
-(id)initWithSecret_key:(id)arg1 download_fbid:(long long)arg2 download_size_bytes:(long long)arg3 download_hash:(id)arg4 suggested_file_name:(id)arg5 file_mime_type:(id)arg6 thumbnail_data:(id)arg7 image_metadata:(id)arg8 video_metadata:(id)arg9 download_mac:(id)arg10 ;
-(NSData *)secret_key;
-(BOOL)secret_keyIsSet;
-(void)unsetSecret_key;
-(long long)download_fbid;
-(BOOL)download_fbidIsSet;
-(void)unsetDownload_fbid;
-(long long)download_size_bytes;
-(BOOL)download_size_bytesIsSet;
-(void)unsetDownload_size_bytes;
-(NSData *)download_hash;
-(BOOL)download_hashIsSet;
-(void)unsetDownload_hash;
-(NSString *)suggested_file_name;
-(BOOL)suggested_file_nameIsSet;
-(void)unsetSuggested_file_name;
-(NSString *)file_mime_type;
-(BOOL)file_mime_typeIsSet;
-(void)unsetFile_mime_type;
-(NSData *)thumbnail_data;
-(BOOL)thumbnail_dataIsSet;
-(void)unsetThumbnail_data;
-(MNSecureMessagingImageMetadata *)image_metadata;
-(BOOL)image_metadataIsSet;
-(void)unsetImage_metadata;
-(MNSecureMessagingVideoMetadata *)video_metadata;
-(BOOL)video_metadataIsSet;
-(void)unsetVideo_metadata;
-(NSString *)download_mac;
-(BOOL)download_macIsSet;
-(void)unsetDownload_mac;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

