void BrRes_150()
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
   
   TH1D *__18 = new TH1D("__18","Number of sub-runs: 150",240,-11,11);
   __18->SetBinContent(94,1);
   __18->SetBinContent(98,1);
   __18->SetBinContent(99,2);
   __18->SetBinContent(102,2);
   __18->SetBinContent(103,5);
   __18->SetBinContent(104,3);
   __18->SetBinContent(105,6);
   __18->SetBinContent(106,8);
   __18->SetBinContent(107,12);
   __18->SetBinContent(108,12);
   __18->SetBinContent(109,11);
   __18->SetBinContent(110,15);
   __18->SetBinContent(111,25);
   __18->SetBinContent(112,22);
   __18->SetBinContent(113,36);
   __18->SetBinContent(114,33);
   __18->SetBinContent(115,48);
   __18->SetBinContent(116,46);
   __18->SetBinContent(117,57);
   __18->SetBinContent(118,58);
   __18->SetBinContent(119,52);
   __18->SetBinContent(120,52);
   __18->SetBinContent(121,49);
   __18->SetBinContent(122,67);
   __18->SetBinContent(123,46);
   __18->SetBinContent(124,52);
   __18->SetBinContent(125,49);
   __18->SetBinContent(126,49);
   __18->SetBinContent(127,32);
   __18->SetBinContent(128,32);
   __18->SetBinContent(129,25);
   __18->SetBinContent(130,24);
   __18->SetBinContent(131,20);
   __18->SetBinContent(132,13);
   __18->SetBinContent(133,6);
   __18->SetBinContent(134,5);
   __18->SetBinContent(135,10);
   __18->SetBinContent(136,3);
   __18->SetBinContent(137,5);
   __18->SetBinContent(138,4);
   __18->SetBinContent(140,1);
   __18->SetBinContent(142,1);
   __18->SetEntries(1000);
   __18->SetStats(0);
   __18->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __18->GetXaxis()->SetRange(2,239);
   __18->GetXaxis()->CenterTitle(true);
   __18->GetXaxis()->SetLabelFont(42);
   __18->GetXaxis()->SetTitleSize(0.04);
   __18->GetXaxis()->SetTitleOffset(1.1);
   __18->GetXaxis()->SetTitleFont(42);
   __18->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __18->GetYaxis()->CenterTitle(true);
   __18->GetYaxis()->SetNdivisions(4000510);
   __18->GetYaxis()->SetLabelFont(42);
   __18->GetYaxis()->SetTitleSize(0.04);
   __18->GetYaxis()->SetTitleOffset(1.1);
   __18->GetYaxis()->SetTitleFont(42);
   __18->GetZaxis()->SetLabelFont(42);
   __18->GetZaxis()->SetTitleOffset(1);
   __18->GetZaxis()->SetTitleFont(42);
   __18->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0194
#pm0.02
");
   pt_LaTex = pt->AddText("0.641
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
