# Week 09 — Git command, GitHub และ Stack Overflow

**ผู้จัดทำ:** ปฏิมากรณ์ ศรีนามเอ้น (Patimakorn Srinam-en) &nbsp;|&nbsp; **รหัสนักศึกษา:** 6905604
**รายวิชา:** CPE101 &nbsp;|&nbsp; **อาจารย์ผู้สอน:** อ.จตุพล ศรีวิลาศ (อ.ป๊อก)

## ไฟล์ในโฟลเดอร์นี้

| ไฟล์ | การทำงาน | ใช้ฝึกคำสั่ง Git |
|------|----------|------------------|
| `test_01.c` | แสดงข้อความออกทางหน้าจอด้วย `printf` | `git rm` และการ `pull` กลับ |
| `test_02.c` | รับตัวเลข 2 จำนวนแล้วแสดงผลบวก | สถานะ `modified` และ `git restore` |
| `test_03.c` | วนลูปแสดงสูตรคูณแม่ 2 | สถานะ `untracked` → `git add` |

## วิธี compile และรัน

```bash
gcc test_01.c -o test_01
./test_01
```

## คำสั่ง Git ที่ใช้ในงานนี้

```bash
git init -b main                             # สร้าง Local Repository
git config --global user.name "..."          # ตั้งชื่อผู้ใช้
git config --global user.email "..."         # ตั้งอีเมล (ต้องตรงกับ GitHub)
git status                                   # ตรวจสอบสถานะไฟล์
git add .                                    # นำไฟล์เข้าสถานะ staged
git commit -m "Add week09 C source files"    # บันทึกเป็นเวอร์ชันใหม่
git remote add origin <URL>                  # ผูกกับ Remote Repository
git push -u origin main                      # ส่งขึ้น GitHub
git clone <URL>                              # ดึงลงมาสร้าง Local ครั้งแรก
git pull origin main                         # ดึง commit ใหม่มาอัปเดต
git rm <file>                                # เลิกติดตามไฟล์
git restore <file>                           # ยกเลิกการแก้ไข
```

## สถานะของไฟล์ในระบบ Git

```
Untracked ──git add──► Staged ──git commit──► Unmodified
                          ▲                       │
                          │                    แก้ไฟล์
                       git add                    ▼
                          └───────────────────  Modified
                                  └──git restore──► กลับเป็น Unmodified
```
