void BrErr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",240,0.4,1.6);
   __32->SetBinContent(12,4);
   __32->SetBinContent(13,12);
   __32->SetBinContent(14,48);
   __32->SetBinContent(15,144);
   __32->SetBinContent(16,191);
   __32->SetBinContent(17,249);
   __32->SetBinContent(18,186);
   __32->SetBinContent(19,115);
   __32->SetBinContent(20,37);
   __32->SetBinContent(21,11);
   __32->SetBinContent(22,1);
   __32->SetBinContent(23,2);
   __32->SetEntries(1000);
   __32->SetStats(0);
   __32->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __32->GetXaxis()->SetRange(0,44);
   __32->GetXaxis()->CenterTitle(true);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleSize(0.04);
   __32->GetXaxis()->SetTitleOffset(1.1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __32->GetYaxis()->CenterTitle(true);
   __32->GetYaxis()->SetNdivisions(4000510);
   __32->GetYaxis()->SetLabelFont(42);
   __32->GetYaxis()->SetTitleSize(0.04);
   __32->GetYaxis()->SetTitleOffset(1.1);
   __32->GetYaxis()->SetTitleFont(42);
   __32->GetZaxis()->SetLabelFont(42);
   __32->GetZaxis()->SetTitleOffset(1);
   __32->GetZaxis()->SetTitleFont(42);
   __32->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.482
#pm0.0003
");
   pt_LaTex = pt->AddText("0.00826
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
