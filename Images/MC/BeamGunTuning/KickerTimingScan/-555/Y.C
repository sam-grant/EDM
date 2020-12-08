void Y()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y__5 = new TH1F("Y__5","-555",100,-100,100);
   Y__5->SetLineWidth(3);
   Y__5->GetXaxis()->SetTitle("Y [mm]");
   Y__5->GetXaxis()->CenterTitle(true);
   Y__5->GetXaxis()->SetLabelFont(42);
   Y__5->GetXaxis()->SetTitleSize(0.04);
   Y__5->GetXaxis()->SetTitleOffset(1.1);
   Y__5->GetXaxis()->SetTitleFont(42);
   Y__5->GetYaxis()->SetTitle("Ghost tracks");
   Y__5->GetYaxis()->CenterTitle(true);
   Y__5->GetYaxis()->SetNdivisions(4000510);
   Y__5->GetYaxis()->SetLabelFont(42);
   Y__5->GetYaxis()->SetTitleSize(0.04);
   Y__5->GetYaxis()->SetTitleOffset(1.1);
   Y__5->GetYaxis()->SetTitleFont(42);
   Y__5->GetZaxis()->SetLabelFont(42);
   Y__5->GetZaxis()->SetTitleOffset(1);
   Y__5->GetZaxis()->SetTitleFont(42);
   Y__5->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
