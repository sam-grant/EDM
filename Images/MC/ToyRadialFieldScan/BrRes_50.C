void BrRes_50()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__6 = new TH1D("__6","Number of sub-runs: 50",240,-11,11);
   __6->SetBinContent(101,1);
   __6->SetBinContent(103,1);
   __6->SetBinContent(104,2);
   __6->SetBinContent(106,3);
   __6->SetBinContent(107,3);
   __6->SetBinContent(108,6);
   __6->SetBinContent(109,8);
   __6->SetBinContent(110,19);
   __6->SetBinContent(111,19);
   __6->SetBinContent(112,24);
   __6->SetBinContent(113,26);
   __6->SetBinContent(114,37);
   __6->SetBinContent(115,56);
   __6->SetBinContent(116,50);
   __6->SetBinContent(117,62);
   __6->SetBinContent(118,50);
   __6->SetBinContent(119,54);
   __6->SetBinContent(120,63);
   __6->SetBinContent(121,66);
   __6->SetBinContent(122,67);
   __6->SetBinContent(123,63);
   __6->SetBinContent(124,57);
   __6->SetBinContent(125,57);
   __6->SetBinContent(126,36);
   __6->SetBinContent(127,50);
   __6->SetBinContent(128,26);
   __6->SetBinContent(129,18);
   __6->SetBinContent(130,23);
   __6->SetBinContent(131,16);
   __6->SetBinContent(132,10);
   __6->SetBinContent(133,10);
   __6->SetBinContent(134,7);
   __6->SetBinContent(135,4);
   __6->SetBinContent(136,4);
   __6->SetBinContent(137,1);
   __6->SetBinContent(138,1);
   __6->SetEntries(1000);
   __6->SetStats(0);
   __6->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __6->GetXaxis()->SetRange(20,222);
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
   pt_LaTex = pt->AddText("0.0151
#pm0.02
");
   pt_LaTex = pt->AddText("0.547
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
