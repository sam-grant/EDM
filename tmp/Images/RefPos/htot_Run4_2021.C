void htot_Run4_2021()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jul  5 07:57:00 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_tot__1 = new TH1D("h_tot__1","",12,73,76);
   h_tot__1->SetBinContent(4,4398);
   h_tot__1->SetBinContent(5,8796);
   h_tot__1->SetBinContent(6,8796);
   h_tot__1->SetBinContent(7,1466);
   h_tot__1->SetBinContent(8,4398);
   h_tot__1->SetBinContent(9,5864);
   h_tot__1->SetEntries(33718);
   h_tot__1->SetStats(0);
   h_tot__1->SetFillColor(1);
   h_tot__1->SetFillStyle(3344);
   h_tot__1->GetXaxis()->SetTitle("#LTy#GT / run [mm]");
   h_tot__1->GetXaxis()->CenterTitle(true);
   h_tot__1->GetXaxis()->SetLabelFont(42);
   h_tot__1->GetXaxis()->SetLabelSize(0.035);
   h_tot__1->GetXaxis()->SetTitleOffset(1.1);
   h_tot__1->GetXaxis()->SetTitleFont(42);
   h_tot__1->GetYaxis()->SetTitle("Runs / 0.25 mm");
   h_tot__1->GetYaxis()->CenterTitle(true);
   h_tot__1->GetYaxis()->SetNdivisions(4000510);
   h_tot__1->GetYaxis()->SetLabelFont(42);
   h_tot__1->GetYaxis()->SetLabelSize(0.035);
   h_tot__1->GetYaxis()->SetTitleOffset(1.25);
   h_tot__1->GetYaxis()->SetTitleFont(42);
   h_tot__1->GetZaxis()->SetLabelFont(42);
   h_tot__1->GetZaxis()->SetLabelSize(0.035);
   h_tot__1->GetZaxis()->SetTitleSize(0.035);
   h_tot__1->GetZaxis()->SetTitleFont(42);
   h_tot__1->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   TText *pt_LaTex = pt->AddText("74.462
#pm0.002
");
   pt_LaTex = pt->AddText("0.442
#pm0.002
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(20);
   pt_LaTex = pt->AddText("#LTy#GT [mm]");
   pt_LaTex = pt->AddText("#sigma [mm]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
