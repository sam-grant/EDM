void BrRes_264()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:11 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__12 = new TH1D("__12","Number of sub-runs: 264",240,-11,11);
   __12->SetBinContent(104,1);
   __12->SetBinContent(105,1);
   __12->SetBinContent(106,2);
   __12->SetBinContent(107,4);
   __12->SetBinContent(108,8);
   __12->SetBinContent(109,7);
   __12->SetBinContent(110,10);
   __12->SetBinContent(111,16);
   __12->SetBinContent(112,27);
   __12->SetBinContent(113,31);
   __12->SetBinContent(114,32);
   __12->SetBinContent(115,42);
   __12->SetBinContent(116,67);
   __12->SetBinContent(117,56);
   __12->SetBinContent(118,76);
   __12->SetBinContent(119,60);
   __12->SetBinContent(120,73);
   __12->SetBinContent(121,65);
   __12->SetBinContent(122,79);
   __12->SetBinContent(123,73);
   __12->SetBinContent(124,54);
   __12->SetBinContent(125,53);
   __12->SetBinContent(126,30);
   __12->SetBinContent(127,32);
   __12->SetBinContent(128,32);
   __12->SetBinContent(129,18);
   __12->SetBinContent(130,16);
   __12->SetBinContent(131,11);
   __12->SetBinContent(132,8);
   __12->SetBinContent(133,8);
   __12->SetBinContent(134,2);
   __12->SetBinContent(135,2);
   __12->SetBinContent(136,2);
   __12->SetBinContent(137,1);
   __12->SetBinContent(138,1);
   __12->SetEntries(1000);
   __12->SetStats(0);
   __12->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __12->GetXaxis()->SetRange(27,213);
   __12->GetXaxis()->CenterTitle(true);
   __12->GetXaxis()->SetLabelFont(42);
   __12->GetXaxis()->SetTitleSize(0.04);
   __12->GetXaxis()->SetTitleOffset(1.1);
   __12->GetXaxis()->SetTitleFont(42);
   __12->GetYaxis()->SetTitle("Trials / 0.091667 ppm");
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
   pt_LaTex = pt->AddText("-0.0147
#pm0.02
");
   pt_LaTex = pt->AddText("0.501
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
