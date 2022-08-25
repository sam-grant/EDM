void BrRes_125()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__15 = new TH1D("__15","Number of sub-runs: 125",240,-11,11);
   __15->SetBinContent(95,1);
   __15->SetBinContent(96,1);
   __15->SetBinContent(100,2);
   __15->SetBinContent(101,4);
   __15->SetBinContent(102,2);
   __15->SetBinContent(103,1);
   __15->SetBinContent(104,1);
   __15->SetBinContent(105,7);
   __15->SetBinContent(106,8);
   __15->SetBinContent(107,15);
   __15->SetBinContent(108,16);
   __15->SetBinContent(109,19);
   __15->SetBinContent(110,25);
   __15->SetBinContent(111,18);
   __15->SetBinContent(112,32);
   __15->SetBinContent(113,34);
   __15->SetBinContent(114,41);
   __15->SetBinContent(115,41);
   __15->SetBinContent(116,59);
   __15->SetBinContent(117,50);
   __15->SetBinContent(118,49);
   __15->SetBinContent(119,53);
   __15->SetBinContent(120,50);
   __15->SetBinContent(121,38);
   __15->SetBinContent(122,49);
   __15->SetBinContent(123,55);
   __15->SetBinContent(124,34);
   __15->SetBinContent(125,38);
   __15->SetBinContent(126,46);
   __15->SetBinContent(127,25);
   __15->SetBinContent(128,31);
   __15->SetBinContent(129,28);
   __15->SetBinContent(130,25);
   __15->SetBinContent(131,23);
   __15->SetBinContent(132,19);
   __15->SetBinContent(133,14);
   __15->SetBinContent(134,9);
   __15->SetBinContent(135,8);
   __15->SetBinContent(136,5);
   __15->SetBinContent(137,7);
   __15->SetBinContent(138,3);
   __15->SetBinContent(139,7);
   __15->SetBinContent(140,2);
   __15->SetBinContent(142,1);
   __15->SetBinContent(143,2);
   __15->SetBinContent(144,1);
   __15->SetBinContent(147,1);
   __15->SetEntries(1000);
   __15->SetStats(0);
   __15->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __15->GetXaxis()->SetRange(0,241);
   __15->GetXaxis()->CenterTitle(true);
   __15->GetXaxis()->SetLabelFont(42);
   __15->GetXaxis()->SetTitleSize(0.04);
   __15->GetXaxis()->SetTitleOffset(1.1);
   __15->GetXaxis()->SetTitleFont(42);
   __15->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __15->GetYaxis()->CenterTitle(true);
   __15->GetYaxis()->SetNdivisions(4000510);
   __15->GetYaxis()->SetLabelFont(42);
   __15->GetYaxis()->SetTitleSize(0.04);
   __15->GetYaxis()->SetTitleOffset(1.1);
   __15->GetYaxis()->SetTitleFont(42);
   __15->GetZaxis()->SetLabelFont(42);
   __15->GetZaxis()->SetTitleOffset(1);
   __15->GetZaxis()->SetTitleFont(42);
   __15->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0146
#pm0.02
");
   pt_LaTex = pt->AddText("0.712
#pm0.02
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
