void Y()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:46:16 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y__1 = new TH1F("Y__1","-505",100,-100,100);
   Y__1->SetLineWidth(3);
   Y__1->GetXaxis()->SetTitle("Y [mm]");
   Y__1->GetXaxis()->CenterTitle(true);
   Y__1->GetXaxis()->SetLabelFont(42);
   Y__1->GetXaxis()->SetTitleSize(0.04);
   Y__1->GetXaxis()->SetTitleOffset(1.1);
   Y__1->GetXaxis()->SetTitleFont(42);
   Y__1->GetYaxis()->SetTitle("Ghost tracks");
   Y__1->GetYaxis()->CenterTitle(true);
   Y__1->GetYaxis()->SetNdivisions(4000510);
   Y__1->GetYaxis()->SetLabelFont(42);
   Y__1->GetYaxis()->SetTitleSize(0.04);
   Y__1->GetYaxis()->SetTitleOffset(1.1);
   Y__1->GetYaxis()->SetTitleFont(42);
   Y__1->GetZaxis()->SetLabelFont(42);
   Y__1->GetZaxis()->SetTitleOffset(1);
   Y__1->GetZaxis()->SetTitleFont(42);
   Y__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
