void BrRes_200()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__24 = new TH1D("__24","Number of sub-runs: 200",240,-11,11);
   __24->SetBinContent(99,1);
   __24->SetBinContent(101,1);
   __24->SetBinContent(103,1);
   __24->SetBinContent(105,2);
   __24->SetBinContent(106,3);
   __24->SetBinContent(107,5);
   __24->SetBinContent(108,8);
   __24->SetBinContent(109,18);
   __24->SetBinContent(110,16);
   __24->SetBinContent(111,19);
   __24->SetBinContent(112,27);
   __24->SetBinContent(113,36);
   __24->SetBinContent(114,26);
   __24->SetBinContent(115,49);
   __24->SetBinContent(116,46);
   __24->SetBinContent(117,66);
   __24->SetBinContent(118,51);
   __24->SetBinContent(119,65);
   __24->SetBinContent(120,64);
   __24->SetBinContent(121,68);
   __24->SetBinContent(122,58);
   __24->SetBinContent(123,65);
   __24->SetBinContent(124,54);
   __24->SetBinContent(125,47);
   __24->SetBinContent(126,41);
   __24->SetBinContent(127,49);
   __24->SetBinContent(128,28);
   __24->SetBinContent(129,15);
   __24->SetBinContent(130,19);
   __24->SetBinContent(131,11);
   __24->SetBinContent(132,15);
   __24->SetBinContent(133,10);
   __24->SetBinContent(134,3);
   __24->SetBinContent(135,3);
   __24->SetBinContent(136,6);
   __24->SetBinContent(137,2);
   __24->SetBinContent(139,1);
   __24->SetBinContent(144,1);
   __24->SetEntries(1000);
   __24->SetStats(0);
   __24->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __24->GetXaxis()->SetRange(16,225);
   __24->GetXaxis()->CenterTitle(true);
   __24->GetXaxis()->SetLabelFont(42);
   __24->GetXaxis()->SetTitleSize(0.04);
   __24->GetXaxis()->SetTitleOffset(1.1);
   __24->GetXaxis()->SetTitleFont(42);
   __24->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __24->GetYaxis()->CenterTitle(true);
   __24->GetYaxis()->SetNdivisions(4000510);
   __24->GetYaxis()->SetLabelFont(42);
   __24->GetYaxis()->SetTitleSize(0.04);
   __24->GetYaxis()->SetTitleOffset(1.1);
   __24->GetYaxis()->SetTitleFont(42);
   __24->GetZaxis()->SetLabelFont(42);
   __24->GetZaxis()->SetTitleOffset(1);
   __24->GetZaxis()->SetTitleFont(42);
   __24->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.00715
#pm0.02
");
   pt_LaTex = pt->AddText("0.563
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
