void BrRes_275()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__33 = new TH1D("__33","Number of sub-runs: 275",240,-11,11);
   __33->SetBinContent(103,1);
   __33->SetBinContent(104,1);
   __33->SetBinContent(105,1);
   __33->SetBinContent(106,4);
   __33->SetBinContent(107,2);
   __33->SetBinContent(108,2);
   __33->SetBinContent(109,2);
   __33->SetBinContent(110,6);
   __33->SetBinContent(111,15);
   __33->SetBinContent(112,17);
   __33->SetBinContent(113,31);
   __33->SetBinContent(114,39);
   __33->SetBinContent(115,52);
   __33->SetBinContent(116,56);
   __33->SetBinContent(117,58);
   __33->SetBinContent(118,73);
   __33->SetBinContent(119,73);
   __33->SetBinContent(120,76);
   __33->SetBinContent(121,74);
   __33->SetBinContent(122,71);
   __33->SetBinContent(123,74);
   __33->SetBinContent(124,59);
   __33->SetBinContent(125,58);
   __33->SetBinContent(126,42);
   __33->SetBinContent(127,27);
   __33->SetBinContent(128,20);
   __33->SetBinContent(129,23);
   __33->SetBinContent(130,16);
   __33->SetBinContent(131,8);
   __33->SetBinContent(132,9);
   __33->SetBinContent(133,6);
   __33->SetBinContent(134,2);
   __33->SetBinContent(135,1);
   __33->SetBinContent(139,1);
   __33->SetEntries(1000);
   __33->SetStats(0);
   __33->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __33->GetXaxis()->SetRange(33,208);
   __33->GetXaxis()->CenterTitle(true);
   __33->GetXaxis()->SetLabelFont(42);
   __33->GetXaxis()->SetTitleSize(0.04);
   __33->GetXaxis()->SetTitleOffset(1.1);
   __33->GetXaxis()->SetTitleFont(42);
   __33->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __33->GetYaxis()->CenterTitle(true);
   __33->GetYaxis()->SetNdivisions(4000510);
   __33->GetYaxis()->SetLabelFont(42);
   __33->GetYaxis()->SetTitleSize(0.04);
   __33->GetYaxis()->SetTitleOffset(1.1);
   __33->GetYaxis()->SetTitleFont(42);
   __33->GetZaxis()->SetLabelFont(42);
   __33->GetZaxis()->SetTitleOffset(1);
   __33->GetZaxis()->SetTitleFont(42);
   __33->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.00614
#pm0.01
");
   pt_LaTex = pt->AddText("0.471
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
