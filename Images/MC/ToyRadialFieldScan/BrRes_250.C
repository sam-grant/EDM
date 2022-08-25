void BrRes_250()
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
   
   TH1D *__30 = new TH1D("__30","Number of sub-runs: 250",240,-11,11);
   __30->SetBinContent(103,2);
   __30->SetBinContent(104,1);
   __30->SetBinContent(105,2);
   __30->SetBinContent(106,6);
   __30->SetBinContent(107,2);
   __30->SetBinContent(108,6);
   __30->SetBinContent(109,8);
   __30->SetBinContent(110,11);
   __30->SetBinContent(111,13);
   __30->SetBinContent(112,20);
   __30->SetBinContent(113,26);
   __30->SetBinContent(114,30);
   __30->SetBinContent(115,48);
   __30->SetBinContent(116,56);
   __30->SetBinContent(117,62);
   __30->SetBinContent(118,57);
   __30->SetBinContent(119,85);
   __30->SetBinContent(120,83);
   __30->SetBinContent(121,73);
   __30->SetBinContent(122,75);
   __30->SetBinContent(123,59);
   __30->SetBinContent(124,58);
   __30->SetBinContent(125,46);
   __30->SetBinContent(126,43);
   __30->SetBinContent(127,37);
   __30->SetBinContent(128,26);
   __30->SetBinContent(129,17);
   __30->SetBinContent(130,13);
   __30->SetBinContent(131,12);
   __30->SetBinContent(132,9);
   __30->SetBinContent(133,6);
   __30->SetBinContent(134,4);
   __30->SetBinContent(135,3);
   __30->SetBinContent(137,1);
   __30->SetEntries(1000);
   __30->SetStats(0);
   __30->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __30->GetXaxis()->SetRange(28,213);
   __30->GetXaxis()->CenterTitle(true);
   __30->GetXaxis()->SetLabelFont(42);
   __30->GetXaxis()->SetTitleSize(0.04);
   __30->GetXaxis()->SetTitleOffset(1.1);
   __30->GetXaxis()->SetTitleFont(42);
   __30->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __30->GetYaxis()->CenterTitle(true);
   __30->GetYaxis()->SetNdivisions(4000510);
   __30->GetYaxis()->SetLabelFont(42);
   __30->GetYaxis()->SetTitleSize(0.04);
   __30->GetYaxis()->SetTitleOffset(1.1);
   __30->GetYaxis()->SetTitleFont(42);
   __30->GetZaxis()->SetLabelFont(42);
   __30->GetZaxis()->SetTitleOffset(1);
   __30->GetZaxis()->SetTitleFont(42);
   __30->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.013
#pm0.02
");
   pt_LaTex = pt->AddText("0.497
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
