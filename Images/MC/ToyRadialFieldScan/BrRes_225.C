void BrRes_225()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:53 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__27 = new TH1D("__27","Number of sub-runs: 225",240,-11,11);
   __27->SetBinContent(102,1);
   __27->SetBinContent(104,2);
   __27->SetBinContent(105,2);
   __27->SetBinContent(106,5);
   __27->SetBinContent(107,4);
   __27->SetBinContent(108,9);
   __27->SetBinContent(109,11);
   __27->SetBinContent(110,14);
   __27->SetBinContent(111,26);
   __27->SetBinContent(112,28);
   __27->SetBinContent(113,34);
   __27->SetBinContent(114,40);
   __27->SetBinContent(115,42);
   __27->SetBinContent(116,61);
   __27->SetBinContent(117,42);
   __27->SetBinContent(118,52);
   __27->SetBinContent(119,66);
   __27->SetBinContent(120,75);
   __27->SetBinContent(121,72);
   __27->SetBinContent(122,63);
   __27->SetBinContent(123,62);
   __27->SetBinContent(124,64);
   __27->SetBinContent(125,29);
   __27->SetBinContent(126,34);
   __27->SetBinContent(127,33);
   __27->SetBinContent(128,32);
   __27->SetBinContent(129,27);
   __27->SetBinContent(130,25);
   __27->SetBinContent(131,11);
   __27->SetBinContent(132,11);
   __27->SetBinContent(133,9);
   __27->SetBinContent(134,5);
   __27->SetBinContent(135,2);
   __27->SetBinContent(136,2);
   __27->SetBinContent(137,2);
   __27->SetBinContent(138,2);
   __27->SetBinContent(142,1);
   __27->SetEntries(1000);
   __27->SetStats(0);
   __27->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __27->GetXaxis()->SetRange(17,224);
   __27->GetXaxis()->CenterTitle(true);
   __27->GetXaxis()->SetLabelFont(42);
   __27->GetXaxis()->SetTitleSize(0.04);
   __27->GetXaxis()->SetTitleOffset(1.1);
   __27->GetXaxis()->SetTitleFont(42);
   __27->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __27->GetYaxis()->CenterTitle(true);
   __27->GetYaxis()->SetNdivisions(4000510);
   __27->GetYaxis()->SetLabelFont(42);
   __27->GetYaxis()->SetTitleSize(0.04);
   __27->GetYaxis()->SetTitleOffset(1.1);
   __27->GetYaxis()->SetTitleFont(42);
   __27->GetZaxis()->SetLabelFont(42);
   __27->GetZaxis()->SetTitleOffset(1);
   __27->GetZaxis()->SetTitleFont(42);
   __27->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0178
#pm0.02
");
   pt_LaTex = pt->AddText("0.556
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
