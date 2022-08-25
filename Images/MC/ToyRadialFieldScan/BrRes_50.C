void BrRes_50()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__6 = new TH1D("__6","Number of sub-runs: 50",240,-11,11);
   __6->SetBinContent(77,1);
   __6->SetBinContent(84,1);
   __6->SetBinContent(87,1);
   __6->SetBinContent(88,2);
   __6->SetBinContent(89,1);
   __6->SetBinContent(90,1);
   __6->SetBinContent(92,2);
   __6->SetBinContent(93,1);
   __6->SetBinContent(94,1);
   __6->SetBinContent(95,3);
   __6->SetBinContent(96,7);
   __6->SetBinContent(97,2);
   __6->SetBinContent(98,2);
   __6->SetBinContent(99,8);
   __6->SetBinContent(100,9);
   __6->SetBinContent(101,7);
   __6->SetBinContent(102,7);
   __6->SetBinContent(103,12);
   __6->SetBinContent(104,15);
   __6->SetBinContent(105,17);
   __6->SetBinContent(106,25);
   __6->SetBinContent(107,21);
   __6->SetBinContent(108,24);
   __6->SetBinContent(109,15);
   __6->SetBinContent(110,17);
   __6->SetBinContent(111,32);
   __6->SetBinContent(112,17);
   __6->SetBinContent(113,29);
   __6->SetBinContent(114,29);
   __6->SetBinContent(115,26);
   __6->SetBinContent(116,26);
   __6->SetBinContent(117,40);
   __6->SetBinContent(118,36);
   __6->SetBinContent(119,33);
   __6->SetBinContent(120,38);
   __6->SetBinContent(121,29);
   __6->SetBinContent(122,32);
   __6->SetBinContent(123,37);
   __6->SetBinContent(124,34);
   __6->SetBinContent(125,35);
   __6->SetBinContent(126,23);
   __6->SetBinContent(127,28);
   __6->SetBinContent(128,25);
   __6->SetBinContent(129,32);
   __6->SetBinContent(130,16);
   __6->SetBinContent(131,11);
   __6->SetBinContent(132,22);
   __6->SetBinContent(133,20);
   __6->SetBinContent(134,17);
   __6->SetBinContent(135,9);
   __6->SetBinContent(136,9);
   __6->SetBinContent(137,13);
   __6->SetBinContent(138,15);
   __6->SetBinContent(139,9);
   __6->SetBinContent(140,9);
   __6->SetBinContent(141,12);
   __6->SetBinContent(142,10);
   __6->SetBinContent(143,12);
   __6->SetBinContent(144,5);
   __6->SetBinContent(145,6);
   __6->SetBinContent(146,3);
   __6->SetBinContent(147,5);
   __6->SetBinContent(148,4);
   __6->SetBinContent(149,1);
   __6->SetBinContent(150,1);
   __6->SetBinContent(151,2);
   __6->SetBinContent(154,1);
   __6->SetBinContent(155,2);
   __6->SetBinContent(160,2);
   __6->SetBinContent(164,1);
   __6->SetEntries(1000);
   __6->SetStats(0);
   __6->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __6->GetXaxis()->SetRange(0,241);
   __6->GetXaxis()->CenterTitle(true);
   __6->GetXaxis()->SetLabelFont(42);
   __6->GetXaxis()->SetTitleSize(0.04);
   __6->GetXaxis()->SetTitleOffset(1.1);
   __6->GetXaxis()->SetTitleFont(42);
   __6->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __6->GetYaxis()->CenterTitle(true);
   __6->GetYaxis()->SetNdivisions(4000510);
   __6->GetYaxis()->SetLabelFont(42);
   __6->GetYaxis()->SetTitleSize(0.04);
   __6->GetYaxis()->SetTitleOffset(1.1);
   __6->GetYaxis()->SetTitleFont(42);
   __6->GetZaxis()->SetLabelFont(42);
   __6->GetZaxis()->SetTitleOffset(1);
   __6->GetZaxis()->SetTitleFont(42);
   __6->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("0.0185
#pm0.04
");
   pt_LaTex = pt->AddText("1.12
#pm0.03
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
