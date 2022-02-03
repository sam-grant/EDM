void BrRes_75()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__9 = new TH1D("__9","Number of sub-runs: 75",240,-11,11);
   __9->SetBinContent(105,2);
   __9->SetBinContent(108,3);
   __9->SetBinContent(109,4);
   __9->SetBinContent(110,10);
   __9->SetBinContent(111,11);
   __9->SetBinContent(112,18);
   __9->SetBinContent(113,20);
   __9->SetBinContent(114,46);
   __9->SetBinContent(115,27);
   __9->SetBinContent(116,56);
   __9->SetBinContent(117,58);
   __9->SetBinContent(118,67);
   __9->SetBinContent(119,69);
   __9->SetBinContent(120,73);
   __9->SetBinContent(121,88);
   __9->SetBinContent(122,83);
   __9->SetBinContent(123,81);
   __9->SetBinContent(124,61);
   __9->SetBinContent(125,58);
   __9->SetBinContent(126,53);
   __9->SetBinContent(127,27);
   __9->SetBinContent(128,23);
   __9->SetBinContent(129,22);
   __9->SetBinContent(130,13);
   __9->SetBinContent(131,14);
   __9->SetBinContent(132,6);
   __9->SetBinContent(133,2);
   __9->SetBinContent(134,2);
   __9->SetBinContent(135,1);
   __9->SetBinContent(136,2);
   __9->SetEntries(1000);
   __9->SetStats(0);
   __9->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __9->GetXaxis()->SetRange(37,205);
   __9->GetXaxis()->CenterTitle(true);
   __9->GetXaxis()->SetLabelFont(42);
   __9->GetXaxis()->SetTitleSize(0.04);
   __9->GetXaxis()->SetTitleOffset(1.1);
   __9->GetXaxis()->SetTitleFont(42);
   __9->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
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
   pt_LaTex = pt->AddText("0.0249
#pm0.01
");
   pt_LaTex = pt->AddText("0.452
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
