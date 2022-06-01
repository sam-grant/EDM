void BrRes_100()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:27 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__12 = new TH1D("__12","Number of sub-runs: 100",240,-11,11);
   __12->SetBinContent(107,2);
   __12->SetBinContent(108,2);
   __12->SetBinContent(109,3);
   __12->SetBinContent(110,5);
   __12->SetBinContent(111,4);
   __12->SetBinContent(112,9);
   __12->SetBinContent(113,26);
   __12->SetBinContent(114,27);
   __12->SetBinContent(115,38);
   __12->SetBinContent(116,52);
   __12->SetBinContent(117,66);
   __12->SetBinContent(118,74);
   __12->SetBinContent(119,88);
   __12->SetBinContent(120,95);
   __12->SetBinContent(121,93);
   __12->SetBinContent(122,93);
   __12->SetBinContent(123,78);
   __12->SetBinContent(124,68);
   __12->SetBinContent(125,60);
   __12->SetBinContent(126,41);
   __12->SetBinContent(127,26);
   __12->SetBinContent(128,20);
   __12->SetBinContent(129,14);
   __12->SetBinContent(130,8);
   __12->SetBinContent(131,4);
   __12->SetBinContent(133,2);
   __12->SetBinContent(135,2);
   __12->SetEntries(1000);
   __12->SetStats(0);
   __12->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __12->GetXaxis()->SetRange(49,193);
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
   pt_LaTex = pt->AddText("0.00568
#pm0.01
");
   pt_LaTex = pt->AddText("0.39
#pm0.009
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
