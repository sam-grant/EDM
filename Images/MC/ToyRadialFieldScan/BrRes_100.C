void BrRes_100()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__12 = new TH1D("__12","Number of sub-runs: 100",240,-11,11);
   __12->SetBinContent(93,1);
   __12->SetBinContent(95,1);
   __12->SetBinContent(97,1);
   __12->SetBinContent(98,1);
   __12->SetBinContent(99,4);
   __12->SetBinContent(100,3);
   __12->SetBinContent(101,7);
   __12->SetBinContent(102,5);
   __12->SetBinContent(103,4);
   __12->SetBinContent(104,11);
   __12->SetBinContent(105,7);
   __12->SetBinContent(106,16);
   __12->SetBinContent(107,15);
   __12->SetBinContent(108,16);
   __12->SetBinContent(109,20);
   __12->SetBinContent(110,24);
   __12->SetBinContent(111,27);
   __12->SetBinContent(112,27);
   __12->SetBinContent(113,36);
   __12->SetBinContent(114,42);
   __12->SetBinContent(115,34);
   __12->SetBinContent(116,44);
   __12->SetBinContent(117,42);
   __12->SetBinContent(118,37);
   __12->SetBinContent(119,42);
   __12->SetBinContent(120,46);
   __12->SetBinContent(121,37);
   __12->SetBinContent(122,46);
   __12->SetBinContent(123,55);
   __12->SetBinContent(124,35);
   __12->SetBinContent(125,44);
   __12->SetBinContent(126,30);
   __12->SetBinContent(127,42);
   __12->SetBinContent(128,31);
   __12->SetBinContent(129,19);
   __12->SetBinContent(130,17);
   __12->SetBinContent(131,23);
   __12->SetBinContent(132,21);
   __12->SetBinContent(133,15);
   __12->SetBinContent(134,12);
   __12->SetBinContent(135,12);
   __12->SetBinContent(136,10);
   __12->SetBinContent(137,6);
   __12->SetBinContent(138,8);
   __12->SetBinContent(139,3);
   __12->SetBinContent(140,7);
   __12->SetBinContent(141,6);
   __12->SetBinContent(143,3);
   __12->SetBinContent(145,1);
   __12->SetBinContent(147,3);
   __12->SetBinContent(149,1);
   __12->SetEntries(1000);
   __12->SetStats(0);
   __12->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __12->GetXaxis()->SetRange(0,241);
   __12->GetXaxis()->CenterTitle(true);
   __12->GetXaxis()->SetLabelFont(42);
   __12->GetXaxis()->SetTitleSize(0.04);
   __12->GetXaxis()->SetTitleOffset(1.1);
   __12->GetXaxis()->SetTitleFont(42);
   __12->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __12->GetYaxis()->CenterTitle(true);
   __12->GetYaxis()->SetNdivisions(4000510);
   __12->GetYaxis()->SetLabelFont(42);
   __12->GetYaxis()->SetTitleSize(0.04);
   __12->GetYaxis()->SetTitleOffset(1.1);
   __12->GetYaxis()->SetTitleFont(42);
   __12->GetZaxis()->SetLabelFont(42);
   __12->GetZaxis()->SetTitleOffset(1);
   __12->GetZaxis()->SetTitleFont(42);
   __12->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0217
#pm0.03
");
   pt_LaTex = pt->AddText("0.819
#pm0.02
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
