void BrErr_75()
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
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",240,0.4,1.6);
   __8->SetBinContent(89,2);
   __8->SetBinContent(91,3);
   __8->SetBinContent(92,3);
   __8->SetBinContent(93,7);
   __8->SetBinContent(94,7);
   __8->SetBinContent(95,8);
   __8->SetBinContent(96,24);
   __8->SetBinContent(97,35);
   __8->SetBinContent(98,33);
   __8->SetBinContent(99,43);
   __8->SetBinContent(100,45);
   __8->SetBinContent(101,47);
   __8->SetBinContent(102,53);
   __8->SetBinContent(103,59);
   __8->SetBinContent(104,61);
   __8->SetBinContent(105,67);
   __8->SetBinContent(106,70);
   __8->SetBinContent(107,53);
   __8->SetBinContent(108,59);
   __8->SetBinContent(109,62);
   __8->SetBinContent(110,41);
   __8->SetBinContent(111,51);
   __8->SetBinContent(112,42);
   __8->SetBinContent(113,22);
   __8->SetBinContent(114,18);
   __8->SetBinContent(115,18);
   __8->SetBinContent(116,15);
   __8->SetBinContent(117,8);
   __8->SetBinContent(118,11);
   __8->SetBinContent(119,11);
   __8->SetBinContent(120,6);
   __8->SetBinContent(121,5);
   __8->SetBinContent(122,3);
   __8->SetBinContent(123,4);
   __8->SetBinContent(124,2);
   __8->SetBinContent(126,1);
   __8->SetBinContent(134,1);
   __8->SetEntries(1000);
   __8->SetStats(0);
   __8->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __8->GetXaxis()->SetRange(0,212);
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.926
#pm0.001
");
   pt_LaTex = pt->AddText("0.0312
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
