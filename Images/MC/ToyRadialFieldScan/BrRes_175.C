void BrRes_175()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__21 = new TH1D("__21","Number of sub-runs: 175",240,-11,11);
   __21->SetBinContent(111,3);
   __21->SetBinContent(112,2);
   __21->SetBinContent(113,11);
   __21->SetBinContent(114,15);
   __21->SetBinContent(115,27);
   __21->SetBinContent(116,44);
   __21->SetBinContent(117,68);
   __21->SetBinContent(118,87);
   __21->SetBinContent(119,109);
   __21->SetBinContent(120,111);
   __21->SetBinContent(121,136);
   __21->SetBinContent(122,96);
   __21->SetBinContent(123,102);
   __21->SetBinContent(124,73);
   __21->SetBinContent(125,49);
   __21->SetBinContent(126,34);
   __21->SetBinContent(127,9);
   __21->SetBinContent(128,19);
   __21->SetBinContent(129,4);
   __21->SetBinContent(130,1);
   __21->SetEntries(1000);
   __21->SetStats(0);
   __21->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __21->GetXaxis()->SetRange(65,176);
   __21->GetXaxis()->CenterTitle(true);
   __21->GetXaxis()->SetLabelFont(42);
   __21->GetXaxis()->SetTitleSize(0.04);
   __21->GetXaxis()->SetTitleOffset(1.1);
   __21->GetXaxis()->SetTitleFont(42);
   __21->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __21->GetYaxis()->CenterTitle(true);
   __21->GetYaxis()->SetNdivisions(4000510);
   __21->GetYaxis()->SetLabelFont(42);
   __21->GetYaxis()->SetTitleSize(0.04);
   __21->GetYaxis()->SetTitleOffset(1.1);
   __21->GetYaxis()->SetTitleFont(42);
   __21->GetZaxis()->SetLabelFont(42);
   __21->GetZaxis()->SetTitleOffset(1);
   __21->GetZaxis()->SetTitleFont(42);
   __21->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.0117
#pm0.009
");
   pt_LaTex = pt->AddText("0.299
#pm0.007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
