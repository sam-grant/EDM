void BrRes_198()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__9 = new TH1D("__9","Number of sub-runs: 198",240,-11,11);
   __9->SetBinContent(103,2);
   __9->SetBinContent(104,5);
   __9->SetBinContent(105,2);
   __9->SetBinContent(106,5);
   __9->SetBinContent(107,2);
   __9->SetBinContent(108,10);
   __9->SetBinContent(109,12);
   __9->SetBinContent(110,12);
   __9->SetBinContent(111,22);
   __9->SetBinContent(112,24);
   __9->SetBinContent(113,27);
   __9->SetBinContent(114,41);
   __9->SetBinContent(115,50);
   __9->SetBinContent(116,51);
   __9->SetBinContent(117,55);
   __9->SetBinContent(118,53);
   __9->SetBinContent(119,74);
   __9->SetBinContent(120,54);
   __9->SetBinContent(121,76);
   __9->SetBinContent(122,47);
   __9->SetBinContent(123,72);
   __9->SetBinContent(124,59);
   __9->SetBinContent(125,43);
   __9->SetBinContent(126,57);
   __9->SetBinContent(127,39);
   __9->SetBinContent(128,28);
   __9->SetBinContent(129,16);
   __9->SetBinContent(130,12);
   __9->SetBinContent(131,10);
   __9->SetBinContent(132,14);
   __9->SetBinContent(133,5);
   __9->SetBinContent(134,5);
   __9->SetBinContent(135,7);
   __9->SetBinContent(136,2);
   __9->SetBinContent(137,2);
   __9->SetBinContent(138,2);
   __9->SetBinContent(140,1);
   __9->SetBinContent(141,2);
   __9->SetEntries(1000);
   __9->SetStats(0);
   __9->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __9->GetXaxis()->SetRange(17,224);
   __9->GetXaxis()->CenterTitle(true);
   __9->GetXaxis()->SetLabelFont(42);
   __9->GetXaxis()->SetTitleSize(0.04);
   __9->GetXaxis()->SetTitleOffset(1.1);
   __9->GetXaxis()->SetTitleFont(42);
   __9->GetYaxis()->SetTitle("Trials / 0.091667 ppm");
   __9->GetYaxis()->CenterTitle(true);
   __9->GetYaxis()->SetNdivisions(4000510);
   __9->GetYaxis()->SetLabelFont(42);
   __9->GetYaxis()->SetTitleSize(0.04);
   __9->GetYaxis()->SetTitleOffset(1.1);
   __9->GetYaxis()->SetTitleFont(42);
   __9->GetZaxis()->SetLabelFont(42);
   __9->GetZaxis()->SetTitleOffset(1);
   __9->GetZaxis()->SetTitleFont(42);
   __9->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0105
#pm0.02
");
   pt_LaTex = pt->AddText("0.56
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
