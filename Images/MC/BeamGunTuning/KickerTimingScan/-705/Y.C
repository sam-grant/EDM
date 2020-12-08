void Y()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:40 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y__17 = new TH1F("Y__17","-705",100,-100,100);
   Y__17->SetLineWidth(3);
   Y__17->GetXaxis()->SetTitle("Y [mm]");
   Y__17->GetXaxis()->CenterTitle(true);
   Y__17->GetXaxis()->SetLabelFont(42);
   Y__17->GetXaxis()->SetTitleSize(0.04);
   Y__17->GetXaxis()->SetTitleOffset(1.1);
   Y__17->GetXaxis()->SetTitleFont(42);
   Y__17->GetYaxis()->SetTitle("Ghost tracks");
   Y__17->GetYaxis()->CenterTitle(true);
   Y__17->GetYaxis()->SetNdivisions(4000510);
   Y__17->GetYaxis()->SetLabelFont(42);
   Y__17->GetYaxis()->SetTitleSize(0.04);
   Y__17->GetYaxis()->SetTitleOffset(1.1);
   Y__17->GetYaxis()->SetTitleFont(42);
   Y__17->GetZaxis()->SetLabelFont(42);
   Y__17->GetZaxis()->SetTitleOffset(1);
   Y__17->GetZaxis()->SetTitleFont(42);
   Y__17->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
