void BrRes_175()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__21 = new TH1D("__21","Number of sub-runs: 175",240,-11,11);
   __21->SetBinContent(102,2);
   __21->SetBinContent(103,2);
   __21->SetBinContent(104,1);
   __21->SetBinContent(105,6);
   __21->SetBinContent(106,5);
   __21->SetBinContent(107,7);
   __21->SetBinContent(108,8);
   __21->SetBinContent(109,13);
   __21->SetBinContent(110,20);
   __21->SetBinContent(111,15);
   __21->SetBinContent(112,32);
   __21->SetBinContent(113,30);
   __21->SetBinContent(114,47);
   __21->SetBinContent(115,42);
   __21->SetBinContent(116,46);
   __21->SetBinContent(117,45);
   __21->SetBinContent(118,54);
   __21->SetBinContent(119,58);
   __21->SetBinContent(120,58);
   __21->SetBinContent(121,60);
   __21->SetBinContent(122,54);
   __21->SetBinContent(123,61);
   __21->SetBinContent(124,58);
   __21->SetBinContent(125,46);
   __21->SetBinContent(126,38);
   __21->SetBinContent(127,43);
   __21->SetBinContent(128,36);
   __21->SetBinContent(129,27);
   __21->SetBinContent(130,20);
   __21->SetBinContent(131,14);
   __21->SetBinContent(132,10);
   __21->SetBinContent(133,16);
   __21->SetBinContent(134,5);
   __21->SetBinContent(135,5);
   __21->SetBinContent(136,5);
   __21->SetBinContent(137,2);
   __21->SetBinContent(138,6);
   __21->SetBinContent(139,1);
   __21->SetBinContent(140,2);
   __21->SetEntries(1000);
   __21->SetStats(0);
   __21->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __21->GetXaxis()->SetRange(8,233);
   __21->GetXaxis()->CenterTitle(true);
   __21->GetXaxis()->SetLabelFont(42);
   __21->GetXaxis()->SetTitleSize(0.04);
   __21->GetXaxis()->SetTitleOffset(1.1);
   __21->GetXaxis()->SetTitleFont(42);
   __21->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __21->GetYaxis()->CenterTitle(true);
   __21->GetYaxis()->SetNdivisions(4000510);
   __21->GetYaxis()->SetLabelFont(42);
   __21->GetYaxis()->SetTitleSize(0.04);
   __21->GetYaxis()->SetTitleOffset(1.1);
   __21->GetYaxis()->SetTitleFont(42);
   __21->GetZaxis()->SetLabelFont(42);
   __21->GetZaxis()->SetTitleOffset(1);
   __21->GetZaxis()->SetTitleFont(42);
   __21->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.0116
#pm0.02
");
   pt_LaTex = pt->AddText("0.608
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
