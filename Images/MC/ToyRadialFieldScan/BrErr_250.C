void BrErr_250()
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
   
   TH1D *__29 = new TH1D("__29","Number of sub-runs: 250",240,0.4,1.6);
   __29->SetBinContent(16,3);
   __29->SetBinContent(17,13);
   __29->SetBinContent(18,35);
   __29->SetBinContent(19,72);
   __29->SetBinContent(20,141);
   __29->SetBinContent(21,230);
   __29->SetBinContent(22,192);
   __29->SetBinContent(23,164);
   __29->SetBinContent(24,85);
   __29->SetBinContent(25,45);
   __29->SetBinContent(26,13);
   __29->SetBinContent(27,5);
   __29->SetBinContent(28,1);
   __29->SetBinContent(29,1);
   __29->SetEntries(1000);
   __29->SetStats(0);
   __29->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __29->GetXaxis()->SetRange(0,54);
   __29->GetXaxis()->CenterTitle(true);
   __29->GetXaxis()->SetLabelFont(42);
   __29->GetXaxis()->SetTitleSize(0.04);
   __29->GetXaxis()->SetTitleOffset(1.1);
   __29->GetXaxis()->SetTitleFont(42);
   __29->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __29->GetYaxis()->CenterTitle(true);
   __29->GetYaxis()->SetNdivisions(4000510);
   __29->GetYaxis()->SetLabelFont(42);
   __29->GetYaxis()->SetTitleSize(0.04);
   __29->GetYaxis()->SetTitleOffset(1.1);
   __29->GetYaxis()->SetTitleFont(42);
   __29->GetZaxis()->SetLabelFont(42);
   __29->GetZaxis()->SetTitleOffset(1);
   __29->GetZaxis()->SetTitleFont(42);
   __29->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.506
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0095
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
